#include "bench/fib.hpp"

// RE Benchmark TU 204 of 20000 (depth=28, stamp="default")
namespace bench_tu_204 {
constexpr unsigned long long result = ::bench::slow_fib<28, 204>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_204
