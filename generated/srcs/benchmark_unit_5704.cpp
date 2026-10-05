#include "bench/fib.hpp"

// RE Benchmark TU 5704 of 20000 (depth=28, stamp="default")
namespace bench_tu_5704 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5704>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5704
