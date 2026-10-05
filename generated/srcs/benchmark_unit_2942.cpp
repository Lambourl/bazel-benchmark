#include "bench/fib.hpp"

// RE Benchmark TU 2942 of 20000 (depth=28, stamp="default")
namespace bench_tu_2942 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2942>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2942
