#include "bench/fib.hpp"

// RE Benchmark TU 19661 of 20000 (depth=28, stamp="default")
namespace bench_tu_19661 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19661>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19661
