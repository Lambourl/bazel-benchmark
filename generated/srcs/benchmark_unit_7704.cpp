#include "bench/fib.hpp"

// RE Benchmark TU 7704 of 20000 (depth=28, stamp="default")
namespace bench_tu_7704 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7704>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7704
