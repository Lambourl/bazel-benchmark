#include "bench/fib.hpp"

// RE Benchmark TU 19601 of 20000 (depth=28, stamp="default")
namespace bench_tu_19601 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19601>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19601
