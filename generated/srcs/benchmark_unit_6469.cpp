#include "bench/fib.hpp"

// RE Benchmark TU 6469 of 20000 (depth=28, stamp="default")
namespace bench_tu_6469 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6469>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6469
