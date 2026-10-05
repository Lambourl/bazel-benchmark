#include "bench/fib.hpp"

// RE Benchmark TU 16417 of 20000 (depth=28, stamp="default")
namespace bench_tu_16417 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16417>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16417
